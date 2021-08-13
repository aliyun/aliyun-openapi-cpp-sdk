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

#ifndef ALIBABACLOUD_SMARTAG_MODEL_DESCRIBECLOUDCONNECTNETWORKSRESULT_H_
#define ALIBABACLOUD_SMARTAG_MODEL_DESCRIBECLOUDCONNECTNETWORKSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/smartag/SmartagExport.h>

namespace AlibabaCloud
{
	namespace Smartag
	{
		namespace Model
		{
			class ALIBABACLOUD_SMARTAG_EXPORT DescribeCloudConnectNetworksResult : public ServiceResult
			{
			public:
				struct CloudConnectNetwork
				{
					struct Tag
					{
						std::string value;
						std::string key;
					};
					bool isDefault;
					std::string interworkingStatus;
					std::string description;
					std::string resourceGroupId;
					long createTime;
					std::string availableCloudBoxCount;
					std::string associatedCenOwnerId;
					std::string cidrBlock;
					std::string name;
					std::string ccnId;
					std::string snatCidrBlock;
					std::string associatedCenId;
					std::vector<CloudConnectNetwork::Tag> tags;
					std::string associatedCloudBoxCount;
				};


				DescribeCloudConnectNetworksResult();
				explicit DescribeCloudConnectNetworksResult(const std::string &payload);
				~DescribeCloudConnectNetworksResult();
				std::vector<CloudConnectNetwork> getCloudConnectNetworks()const;
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<CloudConnectNetwork> cloudConnectNetworks_;
				int totalCount_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SMARTAG_MODEL_DESCRIBECLOUDCONNECTNETWORKSRESULT_H_