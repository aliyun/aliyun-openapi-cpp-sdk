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

#ifndef ALIBABACLOUD_EAIS_MODEL_DESCRIBEEAISRESULT_H_
#define ALIBABACLOUD_EAIS_MODEL_DESCRIBEEAISRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/eais/EaisExport.h>

namespace AlibabaCloud
{
	namespace Eais
	{
		namespace Model
		{
			class ALIBABACLOUD_EAIS_EXPORT DescribeEaisResult : public ServiceResult
			{
			public:
				struct Instance
				{
					struct Tag
					{
						std::string tagKey;
						std::string tagValue;
					};
					std::string status;
					std::string clientInstanceType;
					std::string description;
					std::string category;
					std::string zoneId;
					std::string resourceGroupId;
					std::string vSwitchId;
					std::string securityGroupId;
					std::string startTime;
					std::string clientInstanceId;
					std::string elasticAcceleratedInstanceId;
					std::string jupyterUrl;
					std::string instanceName;
					std::string clientInstanceName;
					std::string creationTime;
					std::string regionId;
					std::string instanceType;
					std::vector<Instance::Tag> tags;
				};


				DescribeEaisResult();
				explicit DescribeEaisResult(const std::string &payload);
				~DescribeEaisResult();
				std::vector<Instance> getInstances()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Instance> instances_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EAIS_MODEL_DESCRIBEEAISRESULT_H_