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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEINSTANCESRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEINSTANCESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/sas/SasExport.h>

namespace AlibabaCloud
{
	namespace Sas
	{
		namespace Model
		{
			class ALIBABACLOUD_SAS_EXPORT DescribeImageInstancesResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct Responses
				{
					std::string imageSize;
					std::string vulStatus;
					int deployed;
					std::string endpoints;
					std::string sysVersion;
					int scaProgress;
					std::string sysProduct;
					std::string imageId;
					std::string imageUpdate;
					std::string sysVendor;
					std::string osRelease;
					std::string scaResult;
					int alarmCount;
					std::string status;
					int hcCount;
					std::string repoNamespace;
					std::string registryType;
					std::string digest;
					std::string instanceId;
					std::string repoName;
					std::string riskStatus;
					int vulCount;
					std::string scaStatus;
					std::string uuid;
					std::string repoType;
					std::string imageCreate;
					std::string alarmStatus;
					std::string tag;
					std::string regionId;
					std::string repoId;
					std::string hcStatus;
				};


				DescribeImageInstancesResult();
				explicit DescribeImageInstancesResult(const std::string &payload);
				~DescribeImageInstancesResult();
				PageInfo getPageInfo()const;
				std::vector<Responses> getImageInstanceList()const;

			protected:
				void parse(const std::string &payload);
			private:
				PageInfo pageInfo_;
				std::vector<Responses> imageInstanceList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGEINSTANCESRESULT_H_