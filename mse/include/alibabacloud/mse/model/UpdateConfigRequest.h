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

#ifndef ALIBABACLOUD_MSE_MODEL_UPDATECONFIGREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_UPDATECONFIGREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT UpdateConfigRequest : public RpcServiceRequest {
public:
	UpdateConfigRequest();
	~UpdateConfigRequest();
	std::string getMseSessionId() const;
	void setMseSessionId(const std::string &mseSessionId);
	bool getConfigAuthEnabled() const;
	void setConfigAuthEnabled(bool configAuthEnabled);
	std::string getPassWord() const;
	void setPassWord(const std::string &passWord);
	std::string getMaxClientCnxns() const;
	void setMaxClientCnxns(const std::string &maxClientCnxns);
	std::string getRequestPars() const;
	void setRequestPars(const std::string &requestPars);
	bool getNamingAuthEnabled() const;
	void setNamingAuthEnabled(bool namingAuthEnabled);
	std::string getExtendedTypesEnable() const;
	void setExtendedTypesEnable(const std::string &extendedTypesEnable);
	std::string getAutopurgeSnapRetainCount() const;
	void setAutopurgeSnapRetainCount(const std::string &autopurgeSnapRetainCount);
	bool getConfigSecretEnabled() const;
	void setConfigSecretEnabled(bool configSecretEnabled);
	bool getMCPEnabled() const;
	void setMCPEnabled(bool mCPEnabled);
	std::string getSyncLimit() const;
	void setSyncLimit(const std::string &syncLimit);
	std::string getInstanceId() const;
	void setInstanceId(const std::string &instanceId);
	bool getTLSEnabled() const;
	void setTLSEnabled(bool tLSEnabled);
	std::string getOpenSuperAcl() const;
	void setOpenSuperAcl(const std::string &openSuperAcl);
	bool getEurekaSupported() const;
	void setEurekaSupported(bool eurekaSupported);
	std::string getSnapshotCount() const;
	void setSnapshotCount(const std::string &snapshotCount);
	std::string getMinSessionTimeout() const;
	void setMinSessionTimeout(const std::string &minSessionTimeout);
	std::string getJuteMaxbuffer() const;
	void setJuteMaxbuffer(const std::string &juteMaxbuffer);
	std::string getConfigType() const;
	void setConfigType(const std::string &configType);
	std::string getMaxSessionTimeout() const;
	void setMaxSessionTimeout(const std::string &maxSessionTimeout);
	std::string getTickTime() const;
	void setTickTime(const std::string &tickTime);
	std::string getClusterId() const;
	void setClusterId(const std::string &clusterId);
	std::string getAutopurgePurgeInterval() const;
	void setAutopurgePurgeInterval(const std::string &autopurgePurgeInterval);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getInitLimit() const;
	void setInitLimit(const std::string &initLimit);
	std::string getUserName() const;
	void setUserName(const std::string &userName);

private:
	std::string mseSessionId_;
	bool configAuthEnabled_;
	std::string passWord_;
	std::string maxClientCnxns_;
	std::string requestPars_;
	bool namingAuthEnabled_;
	std::string extendedTypesEnable_;
	std::string autopurgeSnapRetainCount_;
	bool configSecretEnabled_;
	bool mCPEnabled_;
	std::string syncLimit_;
	std::string instanceId_;
	bool tLSEnabled_;
	std::string openSuperAcl_;
	bool eurekaSupported_;
	std::string snapshotCount_;
	std::string minSessionTimeout_;
	std::string juteMaxbuffer_;
	std::string configType_;
	std::string maxSessionTimeout_;
	std::string tickTime_;
	std::string clusterId_;
	std::string autopurgePurgeInterval_;
	std::string acceptLanguage_;
	std::string initLimit_;
	std::string userName_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_UPDATECONFIGREQUEST_H_
