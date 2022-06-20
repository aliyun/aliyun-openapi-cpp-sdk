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

#ifndef ALIBABACLOUD_SAS_MODEL_MODIFYWEBLOCKCREATECONFIGREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_MODIFYWEBLOCKCREATECONFIGREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ModifyWebLockCreateConfigRequest : public RpcServiceRequest {
public:
	ModifyWebLockCreateConfigRequest();
	~ModifyWebLockCreateConfigRequest();
	std::string getLocalBackupDir() const;
	void setLocalBackupDir(const std::string &localBackupDir);
	std::string getExclusiveFile() const;
	void setExclusiveFile(const std::string &exclusiveFile);
	std::string getExclusiveFileType() const;
	void setExclusiveFileType(const std::string &exclusiveFileType);
	std::string getDir() const;
	void setDir(const std::string &dir);
	std::string getUuid() const;
	void setUuid(const std::string &uuid);
	std::string getMode() const;
	void setMode(const std::string &mode);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getLang() const;
	void setLang(const std::string &lang);
	std::string getInclusiveFile() const;
	void setInclusiveFile(const std::string &inclusiveFile);
	std::string getExclusiveDir() const;
	void setExclusiveDir(const std::string &exclusiveDir);
	std::string getInclusiveFileType() const;
	void setInclusiveFileType(const std::string &inclusiveFileType);
	std::string getDefenceMode() const;
	void setDefenceMode(const std::string &defenceMode);

private:
	std::string localBackupDir_;
	std::string exclusiveFile_;
	std::string exclusiveFileType_;
	std::string dir_;
	std::string uuid_;
	std::string mode_;
	std::string sourceIp_;
	std::string lang_;
	std::string inclusiveFile_;
	std::string exclusiveDir_;
	std::string inclusiveFileType_;
	std::string defenceMode_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_MODIFYWEBLOCKCREATECONFIGREQUEST_H_
