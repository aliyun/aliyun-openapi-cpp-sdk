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

#ifndef ALIBABACLOUD_DDS_MODEL_DESCRIBEBINLOGFILESRESULT_H_
#define ALIBABACLOUD_DDS_MODEL_DESCRIBEBINLOGFILESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/dds/DdsExport.h>

namespace AlibabaCloud
{
	namespace Dds
	{
		namespace Model
		{
			class ALIBABACLOUD_DDS_EXPORT DescribeBinlogFilesResult : public ServiceResult
			{
			public:
				struct LogFile
				{
					std::string downloadLink;
					std::string logBeginTime;
					std::string binLogId;
					std::string logFileName;
					std::string oSSEndpoint;
					std::string logStatus;
					std::string dumpDownloadURL;
					std::string linkExpiredTime;
					int dumpState;
					std::string logEndTime;
					std::string fileId;
					std::string dumpBucket;
					std::string fileSize;
				};


				DescribeBinlogFilesResult();
				explicit DescribeBinlogFilesResult(const std::string &payload);
				~DescribeBinlogFilesResult();
				int getMaxRecordsPerPage()const;
				int getTotalRecordCount()const;
				int getPageNumber()const;
				std::vector<LogFile> getItems()const;

			protected:
				void parse(const std::string &payload);
			private:
				int maxRecordsPerPage_;
				int totalRecordCount_;
				int pageNumber_;
				std::vector<LogFile> items_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_DDS_MODEL_DESCRIBEBINLOGFILESRESULT_H_