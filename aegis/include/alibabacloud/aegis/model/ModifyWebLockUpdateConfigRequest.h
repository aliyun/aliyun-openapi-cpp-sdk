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

#ifndef ALIBABACLOUD_AEGIS_MODEL_MODIFYWEBLOCKUPDATECONFIGREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_MODIFYWEBLOCKUPDATECONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT ModifyWebLockUpdateConfigRequest : public RpcServiceRequest
			{

			public:
				ModifyWebLockUpdateConfigRequest();
				~ModifyWebLockUpdateConfigRequest();

				std::string getLocalBackupDir()const;
				void setLocalBackupDir(const std::string& localBackupDir);
				std::string getMode()const;
				void setMode(const std::string& mode);
				std::string getInclusiveFileType()const;
				void setInclusiveFileType(const std::string& inclusiveFileType);
				std::string getExclusiveFile()const;
				void setExclusiveFile(const std::string& exclusiveFile);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getExclusiveFileType()const;
				void setExclusiveFileType(const std::string& exclusiveFileType);
				int getId()const;
				void setId(int id);
				std::string getLang()const;
				void setLang(const std::string& lang);
				std::string getDir()const;
				void setDir(const std::string& dir);
				std::string getUuid()const;
				void setUuid(const std::string& uuid);
				std::string getExclusiveDir()const;
				void setExclusiveDir(const std::string& exclusiveDir);

            private:
				std::string localBackupDir_;
				std::string mode_;
				std::string inclusiveFileType_;
				std::string exclusiveFile_;
				std::string sourceIp_;
				std::string exclusiveFileType_;
				int id_;
				std::string lang_;
				std::string dir_;
				std::string uuid_;
				std::string exclusiveDir_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_MODIFYWEBLOCKUPDATECONFIGREQUEST_H_