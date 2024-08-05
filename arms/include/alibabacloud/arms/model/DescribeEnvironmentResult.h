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

#ifndef ALIBABACLOUD_ARMS_MODEL_DESCRIBEENVIRONMENTRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_DESCRIBEENVIRONMENTRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT DescribeEnvironmentResult : public ServiceResult
			{
			public:
				struct Data
				{
					struct TagsItem
					{
						std::string value;
						std::string key;
					};
					std::string resourceGroupId;
					std::string feePackage;
					std::string grafanaFolderUid;
					std::string grafanaFolderTitle;
					std::string environmentId;
					std::string bindResourceType;
					std::string bindResourceStatus;
					std::string bindVpcCidr;
					std::vector<TagsItem> tags;
					std::string managedType;
					std::string grafanaDatasourceUid;
					std::string environmentName;
					std::string bindResourceStoreDuration;
					std::string grafanaWorkspaceId;
					std::string securityGroupId;
					std::string prometheusInstanceName;
					std::string dbInstanceStatus;
					std::string bindResourceProfile;
					std::string vswitchId;
					std::string grafanaFolderUrl;
					std::string environmentSubType;
					std::string environmentType;
					std::string vpcId;
					std::string bindResourceId;
					std::string userId;
					std::string prometheusInstanceId;
					std::string grafaDataSourceName;
					std::string regionId;
				};


				DescribeEnvironmentResult();
				explicit DescribeEnvironmentResult(const std::string &payload);
				~DescribeEnvironmentResult();
				std::string getMessage()const;
				Data getData()const;
				int getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				Data data_;
				int code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_DESCRIBEENVIRONMENTRESULT_H_