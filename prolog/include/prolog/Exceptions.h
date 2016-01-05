/******************************************************************************
 * Copyright (C) 2016 by Ralf Kaestner                                        *
 * ralf.kaestner@gmail.com                                                    *
 *                                                                            *
 * This program is free software; you can redistribute it and/or modify       *
 * it under the terms of the Lesser GNU General Public License as published by*
 * the Free Software Foundation; either version 3 of the License, or          *
 * (at your option) any later version.                                        *
 *                                                                            *
 * This program is distributed in the hope that it will be useful,            *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of             *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the               *
 * Lesser GNU General Public License for more details.                        *
 *                                                                            *
 * You should have received a copy of the Lesser GNU General Public License   *
 * along with this program. If not, see <http://www.gnu.org/licenses/>.       *
 ******************************************************************************/

/** \file Exceptions.h
  * \brief Header file defining Prolog exceptions
  */

#ifndef SEMANTIC_MAP_PROLOG_EXCEPTIONS_H
#define SEMANTIC_MAP_PROLOG_EXCEPTIONS_H

#include <ros/exception.h>

namespace semantic_map {
  namespace prolog {
    /** \brief Exception thrown in case of an invalid operation
      */ 
    class InvalidOperationException :
      public ros::Exception {
    public:
      InvalidOperationException(const std::string& description);
    };
    
    /** \brief Exception thrown in case of an invalid value index
      */ 
    class InvalidValueIndexException :
      public ros::Exception {
    public:
      InvalidValueIndexException(size_t index);
    };
    
    /** \brief Exception thrown in case of a parse error
      */ 
    class ParseErrorException :
      public ros::Exception {
    public:
      ParseErrorException(const std::string& description);
    };
    
    /** \brief Exception thrown in case of an unbound variable
      */ 
    class UnboundVariableException :
      public ros::Exception {
    public:
      UnboundVariableException(const std::string& name);
    };
  };
};

#endif
