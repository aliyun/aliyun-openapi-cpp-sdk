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

#ifndef ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELISTWITHBASELINENAMERESULT_H_
#define ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELISTWITHBASELINENAMERESULT_H_

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
			class ALIBABACLOUD_SAS_EXPORT DescribeImageListWithBaselineNameResult : public ServiceResult
			{
			public:
				struct PageInfo
				{
					int totalCount;
					int pageSize;
					int currentPage;
					int count;
				};
				struct ImageInfosItem
				{
					int imageSize;
					int totalItemCount;
					std::string image;
					std::string targetName;
					std::string intranetIp;
					std::string endpoints;
					std::string internetIp;
					std::string containerId;
					int middleRiskImage;
					std::string imageId;
					std::string targetType;
					long imageUpdate;
					std::string clusterName;
					int noRiskImage;
					std::string repoNamespace;
					std::string pod;
					std::string digest;
					std::string instanceId;
					std::string clusterId;
					std::string repoName;
					std::string _namespace;
					long lastScanTime;
					std::string riskStatus;
					std::string targetId;
					std::string instanceName;
					std::string uuid;
					long imageCreate;
					int lowRiskImage;
					std::string repoType;
					std::string baselineType;
					int highRiskImage;
					std::string tag;
					std::string regionId;
					std::string repoId;
				};


				DescribeImageListWithBaselineNameResult();
				explicit DescribeImageListWithBaselineNameResult(const std::string &payload);
				~DescribeImageListWithBaselineNameResult();
				std::vector<ImageInfosItem> getImageInfos()const;
				PageInfo getPageInfo()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<ImageInfosItem> imageInfos_;
				PageInfo pageInfo_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SAS_MODEL_DESCRIBEIMAGELISTWITHBASELINENAMERESULT_H_