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

#ifndef ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICESRESULT_H_
#define ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICESRESULT_H_

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
			class ALIBABACLOUD_COMPUTENESTSUPPLIER_EXPORT ListServicesResult : public ServiceResult
			{
			public:
				struct Service
				{
					struct ServiceInfo
					{
						std::string locale;
						std::string image;
						std::string name;
						std::string shortDescription;
					};
					struct Tag
					{
						std::string value;
						std::string key;
					};
					std::string status;
					std::string deployType;
					std::string artifactId;
					std::string sourceImage;
					std::string resourceGroupId;
					bool defaultVersion;
					std::string createTime;
					std::string serviceId;
					std::string tenantType;
					std::string artifactVersion;
					std::string version;
					std::string supplierName;
					std::string serviceType;
					std::string relationType;
					std::vector<Service::ServiceInfo> serviceInfos;
					std::string commodityCode;
					std::string updateTime;
					std::string approvalType;
					std::string trialType;
					std::string publishTime;
					std::string versionName;
					std::vector<Service::Tag> tags;
					std::string supplierUrl;
					std::string shareType;
				};


				ListServicesResult();
				explicit ListServicesResult(const std::string &payload);
				~ListServicesResult();
				std::vector<Service> getServices()const;
				std::string getTotalCount()const;
				std::string getNextToken()const;
				int getMaxResults()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<Service> services_;
				std::string totalCount_;
				std::string nextToken_;
				int maxResults_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_COMPUTENESTSUPPLIER_MODEL_LISTSERVICESRESULT_H_