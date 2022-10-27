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

#ifndef ALIBABACLOUD_EHPC_MODEL_LISTVOLUMESRESULT_H_
#define ALIBABACLOUD_EHPC_MODEL_LISTVOLUMESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ehpc/EHPCExport.h>

namespace AlibabaCloud
{
	namespace EHPC
	{
		namespace Model
		{
			class ALIBABACLOUD_EHPC_EXPORT ListVolumesResult : public ServiceResult
			{
			public:
				struct VolumeInfo
				{
					struct VolumeInfo1
					{
						std::string role;
						std::string volumeProtocol;
						std::string volumeId;
						std::string remoteDirectory;
						std::string localDirectory;
						std::string volumeType;
						std::string jobQueue;
						std::string volumeMountpoint;
						std::string location;
					};
					std::string volumeProtocol;
					std::string volumeId;
					std::string remoteDirectory;
					std::string volumeType;
					std::string clusterId;
					std::vector<VolumeInfo::VolumeInfo1> additionalVolumes;
					std::string clusterName;
					std::string regionId;
					std::string volumeMountpoint;
				};


				ListVolumesResult();
				explicit ListVolumesResult(const std::string &payload);
				~ListVolumesResult();
				int getTotalCount()const;
				std::vector<VolumeInfo> getVolumes()const;
				int getPageSize()const;
				int getPageNumber()const;

			protected:
				void parse(const std::string &payload);
			private:
				int totalCount_;
				std::vector<VolumeInfo> volumes_;
				int pageSize_;
				int pageNumber_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_EHPC_MODEL_LISTVOLUMESRESULT_H_