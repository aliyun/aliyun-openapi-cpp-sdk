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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESRESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESRESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeAffectedMaliciousFileImagesResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct AffectedMaliciousFileImage
				{
					std::string repoRegionId;
					std::string image;
					std::string targetName;
					std::string imageUuid;
					std::string intranetIp;
					std::string internetIp;
					std::string containerId;
					long latestVerifyTimestamp;
					std::string targetType;
					std::string clusterName;
					long firstScanTimestamp;
					std::string downloadUrl;
					int status;
					std::string filePath;
					std::string highLight;
					long latestScanTimestamp;
					std::string pod;
					std::string digest;
					std::string clusterId;
					std::string maliciousSource;
					std::string repoName;
					std::string _namespace;
					std::string layer;
					std::string targetId;
					std::string instanceName;
					std::string repoInstanceId;
					std::string uuid;
					std::string level;
					std::string tag;
					std::string repoId;
					std::string maliciousMd5;
				};


				DescribeAffectedMaliciousFileImagesResult();
				explicit DescribeAffectedMaliciousFileImagesResult(const std::string &payload);
				~DescribeAffectedMaliciousFileImagesResult();
				std::vector<AffectedMaliciousFileImage> getAffectedMaliciousFileImagesResponse()const;
				PageInfo getPageInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<AffectedMaliciousFileImage> affectedMaliciousFileImagesResponse_;
				PageInfo pageInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEAFFECTEDMALICIOUSFILEIMAGESRESULT_H_