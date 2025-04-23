/*
 * Copyright 2009-2017 Alibaba Cloud All rights reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *      http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef ALIBABACLOUD_EDS_USER_MODEL_LISTPROPERTYRESULT_H_
#define ALIBABACLOUD_EDS_USER_MODEL_LISTPROPERTYRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eds-user/Eds_userExport.h>

namespace AlibabaCloud
{
	namespace Eds_user
	{
		namespace Model
		{
			class ALIBABACLOUD_EDS_USER_EXPORT ListPropertyResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct PropertyValuesItem
					{
						long propertyValueId;
						std::string propertyValue;
					};
					std::vector<Data::PropertyValuesItem> propertyValues;
					std::string propertyKey;
					long propertyId;
				};


				ListPropertyResult();
				explicit ListPropertyResult(const std::string &payload);
				~ListPropertyResult();
				std::string getNextToken()const;
				std::vector<Data> getProperties()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::vector<Data> properties_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EDS_USER_MODEL_LISTPROPERTYRESULT_H_