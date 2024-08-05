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

#ifndef ALIBABACLOUD_ARMS_MODEL_GETRUMUPLOADFILESRESULT_H_
#define ALIBABACLOUD_ARMS_MODEL_GETRUMUPLOADFILESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/arms/ARMSExport.h>

namespace AlibabaCloud
{
	namespace ARMS
	{
		namespace Model
		{
			class ALIBABACLOUD_ARMS_EXPORT GetRumUploadFilesResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					std::string versionId;
					std::string uuid;
					std::string size;
					std::string fileName;
					ObjectOfAny lastModifiedTime;
				};


				GetRumUploadFilesResult();
				explicit GetRumUploadFilesResult(const std::string &payload);
				~GetRumUploadFilesResult();
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::vector<DataItem> getData()const;
				int getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string message_;
				int httpStatusCode_;
				std::vector<DataItem> data_;
				int code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ARMS_MODEL_GETRUMUPLOADFILESRESULT_H_