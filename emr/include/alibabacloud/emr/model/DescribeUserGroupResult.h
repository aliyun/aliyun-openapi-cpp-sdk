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

#ifndef ALIBABACLOUD_EMR_MODEL_DESCRIBEUSERGROUPRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_DESCRIBEUSERGROUPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT DescribeUserGroupResult : public ServiceResult
			{
			public:
				struct RoleDTO
				{
					std::string gmtCreate;
					std::string description;
					std::string gmtModified;
					std::string resourceType;
					long id;
					std::string name;
				};


				DescribeUserGroupResult();
				explicit DescribeUserGroupResult(const std::string &payload);
				~DescribeUserGroupResult();
				std::string getType()const;
				std::string getGmtCreate()const;
				bool getPaging()const;
				long getId()const;
				std::vector<RoleDTO> getRoleDTOList()const;
				std::string getName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string type_;
				std::string gmtCreate_;
				bool paging_;
				long id_;
				std::vector<RoleDTO> roleDTOList_;
				std::string name_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_DESCRIBEUSERGROUPRESULT_H_