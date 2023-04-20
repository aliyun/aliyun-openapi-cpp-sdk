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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICEINSTANCESRESULT_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICEINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/computenestsupplier/ComputeNestSupplierExport.h>

namespace AlibabaCloud
{
	namespace ComputeNestSupplier
	{
		namespace Model
		{
			class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT ListServiceInstancesResult : public ServiceResult
			{
			public:
				struct ServiceInstance
				{
					struct Service
					{
						struct ServiceInfo
						{
							std::string locale;
							std::string image;
							std::string name;
							std::string shortDescription;
						};
						std::string status;
						std::string deployType;
						std::string deployMetadata;
						bool enablePrivateVpcConnection;
						std::string version;
						std::string supplierName;
						std::string serviceType;
						std::vector<ServiceInfo> serviceInfos;
						std::string publishTime;
						std::string versionName;
						std::string supplierUrl;
						std::string serviceId;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string operatedServiceInstanceId;
					long progress;
					std::string parameters;
					std::string endTime;
					std::string operationEndTime;
					std::string createTime;
					bool enableInstanceOps;
					Service service;
					std::string payType;
					std::string source;
					std::string name;
					std::string operationStartTime;
					std::string serviceInstanceId;
					long userId;
					std::string serviceType;
					std::string statusDetail;
					std::string updateTime;
					std::string templateName;
					bool isOperated;
					std::vector<ServiceInstance::Tag> tags;
				};


				ListServiceInstancesResult();
				explicit ListServiceInstancesResult(const std::string &payload);
				~ListServiceInstancesResult();
				int getTotalCount()const;
				std::vector<ServiceInstance> getServiceInstances()const;
				std::string getNextToken()const;
				std::string getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<ServiceInstance> serviceInstances_;
				std::string nextToken_;
				std::string maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICEINSTANCESRESULT_H_