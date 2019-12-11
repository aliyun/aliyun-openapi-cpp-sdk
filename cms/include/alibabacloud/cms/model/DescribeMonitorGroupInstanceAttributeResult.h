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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeMonitorGroupInstanceAttributeResult : public ServiceResult
			{
			public:
				struct Resource
				{
					struct Region
					{
						std::string availabilityZone;
						std::string regionId;
					};
					struct Vpc
					{
						std::string vswitchInstanceId;
						std::string vpcInstanceId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string instanceName;
					std::string desc;
					std::string category;
					std::string instanceId;
					std::string networkType;
					Vpc vpc;
					Region region;
					std::string dimension;
					std::vector<Resource::Tag> tags;
				};


				DescribeMonitorGroupInstanceAttributeResult();
				explicit DescribeMonitorGroupInstanceAttributeResult(const std::string &payload);
				~DescribeMonitorGroupInstanceAttributeResult();
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				int getTotal()const;
				std::vector<Resource> getResources()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int pageSize_;
				int pageNumber_;
				int total_;
				std::vector<Resource> resources_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESULT_H_