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

#ifndef ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEBACKENDINFORESULT_H_
#define ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEBACKENDINFORESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cloudapi/CloudAPIExport.h>

namespace AlibabaCloud
{
	namespace CloudAPI
	{
		namespace Model
		{
			class ALIBABACLOUD_CLOUDAPI_EXPORT DescribeBackendInfoResult : public ServiceResult
			{
			public:
				struct BackendInfo
				{
					struct BackendModel
					{
						struct BackendConfig
						{
							struct VpcConfig
							{
								std::string vpcScheme;
								std::string vpcId;
								std::string instanceId;
								long port;
								std::string vpcTargetHostName;
								std::string vpcAccessId;
								std::string name;
							};
							struct FunctionComputeConfig
							{
								std::string functionName;
								std::string serviceName;
								std::string fcType;
								std::string qualifier;
								bool onlyBusinessPath;
								std::string fcRegionId;
								std::string roleArn;
								std::string fcBaseUrl;
							};
							struct OssConfig
							{
								std::string bucketName;
								std::string ossRegionId;
							};
							struct EventBridgeConfig
							{
								std::string eventBridgeRegionId;
								std::string eventSource;
								std::string eventBus;
								std::string roleArn;
							};
							struct MockConfig
							{
								struct MockHeader
								{
									std::string headerValue;
									std::string headerName;
								};
								std::string mockResult;
								std::string mockStatusCode;
								std::vector<MockHeader> mockHeaders;
							};
							struct DiscoveryConfig
							{
								struct NacosConfig
								{
									std::string groupName;
									std::string secretKey;
									std::string userName;
									std::string serviceName;
									std::string serverAddress;
									std::string clusters;
									std::string _namespace;
									std::string authType;
									std::string accessKey;
									std::string password;
								};
								std::string rcType;
								NacosConfig nacosConfig;
							};
							std::string serviceAddress;
							std::string type;
							FunctionComputeConfig functionComputeConfig;
							VpcConfig vpcConfig;
							EventBridgeConfig eventBridgeConfig;
							OssConfig ossConfig;
							std::string httpTargetHostName;
							int serviceTimeout;
							MockConfig mockConfig;
							DiscoveryConfig discoveryConfig;
						};
						std::string gmtCreate;
						std::string description;
						std::string stageName;
						std::string stageModeId;
						std::string gmtModified;
						BackendConfig backendConfig;
						std::string backendModelId;
					};
					std::string backendName;
					std::string description;
					std::string createdTime;
					std::string modifiedTime;
					std::vector<BackendModel> backendModels;
					std::string backendId;
					std::string backendType;
				};


				DescribeBackendInfoResult();
				explicit DescribeBackendInfoResult(const std::string &payload);
				~DescribeBackendInfoResult();
				BackendInfo getBackendInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				BackendInfo backendInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CLOUDAPI_MODEL_DESCRIBEBACKENDINFORESULT_H_