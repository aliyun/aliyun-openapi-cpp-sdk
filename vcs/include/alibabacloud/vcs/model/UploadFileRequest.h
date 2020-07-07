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

#ifndef ALIBABACLOUD_VCS_MODEL_UPLOADFILEREQUEST_H_
#define ALIBABACLOUD_VCS_MODEL_UPLOADFILEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/vcs/VcsExport.h>

namespace AlibabaCloud
{
	namespace Vcs
	{
		namespace Model
		{
			class ALIBABACLOUD_VCS_EXPORT UploadFileRequest : public RpcServiceRequest
			{

			public:
				UploadFileRequest();
				~UploadFileRequest();

				std::string getFileType()const;
				void setFileType(const std::string& fileType);
				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getFileAliasName()const;
				void setFileAliasName(const std::string& fileAliasName);
				std::string getFileName()const;
				void setFileName(const std::string& fileName);
				std::string getFilePath()const;
				void setFilePath(const std::string& filePath);
				std::string getFileContent()const;
				void setFileContent(const std::string& fileContent);
				std::string getDataSourceId()const;
				void setDataSourceId(const std::string& dataSourceId);
				std::string getMD5()const;
				void setMD5(const std::string& mD5);

            private:
				std::string fileType_;
				std::string corpId_;
				std::string fileAliasName_;
				std::string fileName_;
				std::string filePath_;
				std::string fileContent_;
				std::string dataSourceId_;
				std::string mD5_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_VCS_MODEL_UPLOADFILEREQUEST_H_