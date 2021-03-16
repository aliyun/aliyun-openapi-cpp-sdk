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

#ifndef ALIBABACLOUD_REID_CLOUD_MODEL_LISTMASKDETECTIONRESULTSRESULT_H_
#define ALIBABACLOUD_REID_CLOUD_MODEL_LISTMASKDETECTIONRESULTSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/reid_cloud/Reid_cloudExport.h>

namespace AlibabaCloud
{
	namespace Reid_cloud
	{
		namespace Model
		{
			class ALIBABACLOUD_REID_CLOUD_EXPORT ListMaskDetectionResultsResult : public ServiceResult
			{
			public:
				struct DetectionResult
				{
					std::string maskResult;
					std::string score;
					std::string pkId;
					long locationId;
					std::string imageKey;
					long id;
					std::string ipcId;
				};


				ListMaskDetectionResultsResult();
				explicit ListMaskDetectionResultsResult(const std::string &payload);
				~ListMaskDetectionResultsResult();
				long getTotalCount()const;
				std::string getMessage()const;
				int getPageSize()const;
				int getPageNumber()const;
				std::vector<DetectionResult> getMaskDetectionResults()const;
				std::string getDynamicCode()const;
				std::string getErrorCode()const;
				std::string getDynamicMessage()const;
				std::string getErrorMessage()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				long totalCount_;
				std::string message_;
				int pageSize_;
				int pageNumber_;
				std::vector<DetectionResult> maskDetectionResults_;
				std::string dynamicCode_;
				std::string errorCode_;
				std::string dynamicMessage_;
				std::string errorMessage_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_REID_CLOUD_MODEL_LISTMASKDETECTIONRESULTSRESULT_H_