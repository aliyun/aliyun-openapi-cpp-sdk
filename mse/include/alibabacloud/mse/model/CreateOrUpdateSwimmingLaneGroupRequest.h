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

#ifndef ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEGROUPREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEGROUPREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT CreateOrUpdateSwimmingLaneGroupRequest : public RpcServiceRequest {
public:
	CreateOrUpdateSwimmingLaneGroupRequest();
	~CreateOrUpdateSwimmingLaneGroupRequest();
	std::string getSource() const;
	void setSource(const std::string &source);
	std::string getGmtModified() const;
	void setGmtModified(const std::string &gmtModified);
	std::string getUserId() const;
	void setUserId(const std::string &userId);
	std::string getLicenseKey() const;
	void setLicenseKey(const std::string &licenseKey);
	std::string getAppIds() const;
	void setAppIds(const std::string &appIds);
	bool getEnable() const;
	void setEnable(bool enable);
	std::string getEntryApp() const;
	void setEntryApp(const std::string &entryApp);
	long getId() const;
	void setId(long id);
	std::string getGmtCreate() const;
	void setGmtCreate(const std::string &gmtCreate);
	std::string getName() const;
	void setName(const std::string &name);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getRegion() const;
	void setRegion(const std::string &region);
	int getStatus() const;
	void setStatus(int status);

private:
	std::string source_;
	std::string gmtModified_;
	std::string userId_;
	std::string licenseKey_;
	std::string appIds_;
	bool enable_;
	std::string entryApp_;
	long id_;
	std::string gmtCreate_;
	std::string name_;
	std::string acceptLanguage_;
	std::string region_;
	int status_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_CREATEORUPDATESWIMMINGLANEGROUPREQUEST_H_
