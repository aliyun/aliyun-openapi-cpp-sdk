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

#ifndef ALIBABACLOUD_ECD_MODEL_LISTCDSFILESRESULT_H_
#define ALIBABACLOUD_ECD_MODEL_LISTCDSFILESRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/ecd/EcdExport.h>

namespace AlibabaCloud
{
	namespace Ecd
	{
		namespace Model
		{
			class ALIBABACLOUD_ECD_EXPORT ListCdsFilesResult : public ServiceResult
			{
			public:
				struct FileModel
				{
					std::string rootId;
					std::string sha1;
					std::string description;
					std::string category;
					std::string contentType;
					long openTimeStamp;
					long size;
					std::string driveId;
					std::string creator;
					std::string thumbnail;
					std::string name;
					std::string openTime;
					std::string modifiedTime;
					std::string fileExtension;
					std::string modifier;
					std::string downloadUrl;
					std::string md5;
					std::string status;
					std::string parentId;
					std::string filePath;
					std::string storageType;
					std::string createTime;
					std::string domainId;
					std::string fileType;
					std::string fileId;
					std::string regionId;
				};


				ListCdsFilesResult();
				explicit ListCdsFilesResult(const std::string &payload);
				~ListCdsFilesResult();
				std::string getNextToken()const;
				std::string getMessage()const;
				std::string getCount()const;
				std::vector<FileModel> getFileModels()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string nextToken_;
				std::string message_;
				std::string count_;
				std::vector<FileModel> fileModels_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_ECD_MODEL_LISTCDSFILESRESULT_H_