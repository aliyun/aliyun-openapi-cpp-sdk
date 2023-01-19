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

#ifndef ALIBABACLOUD_SAS_MODEL_ADDCLIENTUSERDEFINERULEREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_ADDCLIENTUSERDEFINERULEREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT AddClientUserDefineRuleRequest : public RpcServiceRequest {
public:
	AddClientUserDefineRuleRequest();
	~AddClientUserDefineRuleRequest();
	int getActionType() const;
	void setActionType(int actionType);
	std::string getNewFilePath() const;
	void setNewFilePath(const std::string &newFilePath);
	int getType() const;
	void setType(int type);
	std::string getPlatform() const;
	void setPlatform(const std::string &platform);
	std::string getRegistryKey() const;
	void setRegistryKey(const std::string &registryKey);
	std::string getCmdline() const;
	void setCmdline(const std::string &cmdline);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getFilePath() const;
	void setFilePath(const std::string &filePath);
	std::string getMd5List() const;
	void setMd5List(const std::string &md5List);
	std::string getParentProcPath() const;
	void setParentProcPath(const std::string &parentProcPath);
	std::string getProcPath() const;
	void setProcPath(const std::string &procPath);
	std::string getParentCmdline() const;
	void setParentCmdline(const std::string &parentCmdline);
	std::string getIP() const;
	void setIP(const std::string &iP);
	std::string getRegistryContent() const;
	void setRegistryContent(const std::string &registryContent);
	std::string getPortStr() const;
	void setPortStr(const std::string &portStr);
	int getPort() const;
	void setPort(int port);
	std::string getName() const;
	void setName(const std::string &name);

private:
	int actionType_;
	std::string newFilePath_;
	int type_;
	std::string platform_;
	std::string registryKey_;
	std::string cmdline_;
	std::string sourceIp_;
	std::string filePath_;
	std::string md5List_;
	std::string parentProcPath_;
	std::string procPath_;
	std::string parentCmdline_;
	std::string iP_;
	std::string registryContent_;
	std::string portStr_;
	int port_;
	std::string name_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_ADDCLIENTUSERDEFINERULEREQUEST_H_
