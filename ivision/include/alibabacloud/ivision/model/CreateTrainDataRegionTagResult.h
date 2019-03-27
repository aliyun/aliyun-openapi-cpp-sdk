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

#ifndef ALIBABACLOUD_IVISION_MODEL_CREATETRAINDATAREGIONTAGRESULT_H_
#define ALIBABACLOUD_IVISION_MODEL_CREATETRAINDATAREGIONTAGRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ivision/IvisionExport.h>

namespace AlibabaCloud
{
	namespace Ivision
	{
		namespace Model
		{
			class ALIBABACLOUD_IVISION_EXPORT CreateTrainDataRegionTagResult : public ServiceResult
			{
			public:
				struct TrainData
				{
					struct TagItem
					{
						struct Region
						{
							std::string left;
							std::string top;
							std::string height;
							std::string width;
						};
						std::string regionType;
						std::string tagId;
						Region region;
					};
					std::string status;
					std::string dataId;
					std::string iterationId;
					std::string tagStatus;
					std::string projectId;
					std::string dataUrl;
					std::string creationTime;
					std::vector<TagItem> tagItems;
					std::string dataName;
				};


				CreateTrainDataRegionTagResult();
				explicit CreateTrainDataRegionTagResult(const std::string &payload);
				~CreateTrainDataRegionTagResult();
				TrainData getTrainData()const;

			protected:
				void parse(const std::string &payload);
			private:
				TrainData trainData_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_IVISION_MODEL_CREATETRAINDATAREGIONTAGRESULT_H_