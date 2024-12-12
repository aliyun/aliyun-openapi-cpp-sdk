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

#ifndef ALIBABACLOUD_DMS_ENTERPRISE_MODEL_ADDINSTANCEREQUEST_H_
#define ALIBABACLOUD_DMS_ENTERPRISE_MODEL_ADDINSTANCEREQUEST_H_

#include <alibabacloud/dms-enterprise/Dms_enterpriseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Dms_enterprise {
namespace Model {
class ALIBABACLOUD_DMS_ENTERPRISE_EXPORT AddInstanceRequest : public RpcServiceRequest {
public:
	AddInstanceRequest();
	~AddInstanceRequest();
	std::string getEcsRegion() const;
	void setEcsRegion(const std::string &ecsRegion);
	std::string getNetworkType() const;
	void setNetworkType(const std::string &networkType);
	long getTid() const;
	void setTid(long tid);
	int getUseSsl() const;
	void setUseSsl(int useSsl);
	std::string getEnableSellCommon() const;
	void setEnableSellCommon(const std::string &enableSellCommon);
	std::string getEnableSellSitd() const;
	void setEnableSellSitd(const std::string &enableSellSitd);
	std::string getInstanceSource() const;
	void setInstanceSource(const std::string &instanceSource);
	std::string getEnvType() const;
	void setEnvType(const std::string &envType);
	std::string getHost() const;
	void setHost(const std::string &host);
	int getQueryTimeout() const;
	void setQueryTimeout(int queryTimeout);
	std::string getEcsInstanceId() const;
	void setEcsInstanceId(const std::string &ecsInstanceId);
	int getExportTimeout() const;
	void setExportTimeout(int exportTimeout);
	long getTemplateId() const;
	void setTemplateId(long templateId);
	std::string getEnableSellTrust() const;
	void setEnableSellTrust(const std::string &enableSellTrust);
	int getPort() const;
	void setPort(int port);
	std::string getSafeRule() const;
	void setSafeRule(const std::string &safeRule);
	int getDdlOnline() const;
	void setDdlOnline(int ddlOnline);
	int getUseDsql() const;
	void setUseDsql(int useDsql);
	std::string getEnableSellStable() const;
	void setEnableSellStable(const std::string &enableSellStable);
	std::string getSid() const;
	void setSid(const std::string &sid);
	long getDbaId() const;
	void setDbaId(long dbaId);
	std::string getDataLinkName() const;
	void setDataLinkName(const std::string &dataLinkName);
	std::string getTemplateType() const;
	void setTemplateType(const std::string &templateType);
	std::string getInstanceType() const;
	void setInstanceType(const std::string &instanceType);
	std::string getDatabasePassword() const;
	void setDatabasePassword(const std::string &databasePassword);
	std::string getInstanceAlias() const;
	void setInstanceAlias(const std::string &instanceAlias);
	std::string getDatabaseUser() const;
	void setDatabaseUser(const std::string &databaseUser);
	std::string getVpcId() const;
	void setVpcId(const std::string &vpcId);
	bool getSkipTest() const;
	void setSkipTest(bool skipTest);

private:
	std::string ecsRegion_;
	std::string networkType_;
	long tid_;
	int useSsl_;
	std::string enableSellCommon_;
	std::string enableSellSitd_;
	std::string instanceSource_;
	std::string envType_;
	std::string host_;
	int queryTimeout_;
	std::string ecsInstanceId_;
	int exportTimeout_;
	long templateId_;
	std::string enableSellTrust_;
	int port_;
	std::string safeRule_;
	int ddlOnline_;
	int useDsql_;
	std::string enableSellStable_;
	std::string sid_;
	long dbaId_;
	std::string dataLinkName_;
	std::string templateType_;
	std::string instanceType_;
	std::string databasePassword_;
	std::string instanceAlias_;
	std::string databaseUser_;
	std::string vpcId_;
	bool skipTest_;
};
} // namespace Model
} // namespace Dms_enterprise
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DMS_ENTERPRISE_MODEL_ADDINSTANCEREQUEST_H_
