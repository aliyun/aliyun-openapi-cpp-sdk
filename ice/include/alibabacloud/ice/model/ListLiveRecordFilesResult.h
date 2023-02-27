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

#ifndef ALIBABACLOUD_ICE_MODEL_LISTLIVERECORDFILESRESULT_H_
#define ALIBABACLOUD_ICE_MODEL_LISTLIVERECORDFILESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ice/ICEExport.h>

namespace AlibabaCloud
{
	namespace ICE
	{
		namespace Model
		{
			class ALIBABACLOUD_ICE_EXPORT ListLiveRecordFilesResult : public ServiceResult
			{
			public:
				struct RecordFileInfo
				{
					std::string endTime;
					std::string createTime;
					std::string startTime;
					std::string jobName;
					float duration;
					std::string recordOutput;
					std::string streamUrl;
					std::string format;
					std::string recordUrl;
					int height;
					std::string recordId;
					int width;
					std::string jobId;
				};


				ListLiveRecordFilesResult();
				explicit ListLiveRecordFilesResult(const std::string &payload);
				~ListLiveRecordFilesResult();
				std::string getTotalCount()const;
				std::string getPageSize()const;
				std::string getSortBy()const;
				long getPageNo()const;
				std::vector<RecordFileInfo> getFiles()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string totalCount_;
				std::string pageSize_;
				std::string sortBy_;
				long pageNo_;
				std::vector<RecordFileInfo> files_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ICE_MODEL_LISTLIVERECORDFILESRESULT_H_