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

#ifndef ALIBABACLOUD_EMR_MODEL_LISTEMRMAINVERSIONRESULT_H_
#define ALIBABACLOUD_EMR_MODEL_LISTEMRMAINVERSIONRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/emr/EmrExport.h>

namespace AlibabaCloud
{
	namespace Emr
	{
		namespace Model
		{
			class ALIBABACLOUD_EMR_EXPORT ListEmrMainVersionResult : public ServiceResult
			{
			public:
				struct EmrMainVersion
				{
					struct ClusterTypeInfo
					{
						struct ServiceInfo
						{
							std::string serviceName;
							std::string serviceDisplayVersion;
							std::string serviceVersion;
							std::string serviceDisplayName;
							bool mandatory;
							bool display;
						};
						std::vector<ClusterTypeInfo::ServiceInfo> serviceInfoList;
						std::string clusterType;
					};
					struct ClusterTypeWhiteUser
					{
						std::string userId;
						std::string clusterType;
					};
					std::vector<EmrMainVersion::ClusterTypeInfo> clusterTypeInfoList;
					std::string imageId;
					std::vector<EmrMainVersion::ClusterTypeWhiteUser> clusterTypeWhiteUserList;
					bool ecmVersion;
					std::vector<std::string> whiteUserList;
					std::string regionId;
					std::string emrVersion;
					std::string stackName;
					std::string publishType;
					bool display;
					std::string stackVersion;
				};


				ListEmrMainVersionResult();
				explicit ListEmrMainVersionResult(const std::string &payload);
				~ListEmrMainVersionResult();
				int getTotalCount()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<EmrMainVersion> getEmrMainVersionList()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				int pageSize_;
				int pageNumber_;
				std::vector<EmrMainVersion> emrMainVersionList_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EMR_MODEL_LISTEMRMAINVERSIONRESULT_H_