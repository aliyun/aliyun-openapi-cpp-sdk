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

#ifndef ALIBABACLOUD_SLB_MODEL_DESCRIBEVSERVERGROUPSRESULT_H_
#define ALIBABACLOUD_SLB_MODEL_DESCRIBEVSERVERGROUPSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/slb/SlbExport.h>

namespace AlibabaCloud
{
	namespace Slb
	{
		namespace Model
		{
			class ALIBABACLOUD_SLB_EXPORT DescribeVServerGroupsResult : public ServiceResult
			{
			public:
				struct VServerGroup
				{
					struct AssociatedObjects
					{
						struct Listener
						{
							int port;
							std::string protocol;
						};
						struct Rule
						{
							std::string ruleId;
							std::string domain;
							std::string url;
							std::string ruleName;
						};
						std::vector<Listener> listeners;
						std::vector<Rule> rules;
					};
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string vServerGroupId;
					AssociatedObjects associatedObjects;
					std::string serviceManagedMode;
					std::string createTime;
					std::string vServerGroupName;
					long serverCount;
					std::vector<VServerGroup::Tag> tags;
				};


				DescribeVServerGroupsResult();
				explicit DescribeVServerGroupsResult(const std::string &payload);
				~DescribeVServerGroupsResult();
				std::vector<VServerGroup> getVServerGroups()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<VServerGroup> vServerGroups_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SLB_MODEL_DESCRIBEVSERVERGROUPSRESULT_H_