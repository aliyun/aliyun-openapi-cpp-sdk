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

#ifndef ALIBABACLOUD_CSAS_MODEL_LISTUSERDEVICESREQUEST_H_
#define ALIBABACLOUD_CSAS_MODEL_LISTUSERDEVICESREQUEST_H_

#include <alibabacloud/csas/CsasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Csas {
namespace Model {
class ALIBABACLOUD_CSAS_EXPORT ListUserDevicesRequest : public RpcServiceRequest {
public:
	ListUserDevicesRequest();
	~ListUserDevicesRequest();
	std::string getMac() const;
	void setMac(const std::string &mac);
	std::vector<std::string> getDeviceTypes() const;
	void setDeviceTypes(const std::vector<std::string> &deviceTypes);
	std::string getHostname() const;
	void setHostname(const std::string &hostname);
	std::vector<std::string> getAppStatuses() const;
	void setAppStatuses(const std::vector<std::string> &appStatuses);
	std::vector<std::string> getDlpStatuses() const;
	void setDlpStatuses(const std::vector<std::string> &dlpStatuses);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getSaseUserId() const;
	void setSaseUserId(const std::string &saseUserId);
	long getPageSize() const;
	void setPageSize(long pageSize);
	std::vector<std::string> getNacStatuses() const;
	void setNacStatuses(const std::vector<std::string> &nacStatuses);
	std::string getDepartment() const;
	void setDepartment(const std::string &department);
	std::string getInnerIp() const;
	void setInnerIp(const std::string &innerIp);
	std::vector<std::string> getIaStatuses() const;
	void setIaStatuses(const std::vector<std::string> &iaStatuses);
	std::string getDeviceBelong() const;
	void setDeviceBelong(const std::string &deviceBelong);
	long getCurrentPage() const;
	void setCurrentPage(long currentPage);
	bool getSharingStatus() const;
	void setSharingStatus(bool sharingStatus);
	std::vector<std::string> getDeviceTags() const;
	void setDeviceTags(const std::vector<std::string> &deviceTags);
	std::vector<std::string> getDeviceStatuses() const;
	void setDeviceStatuses(const std::vector<std::string> &deviceStatuses);
	std::vector<std::string> getPaStatuses() const;
	void setPaStatuses(const std::vector<std::string> &paStatuses);
	std::string getSortBy() const;
	void setSortBy(const std::string &sortBy);
	std::string getUsername() const;
	void setUsername(const std::string &username);

private:
	std::string mac_;
	std::vector<std::string> deviceTypes_;
	std::string hostname_;
	std::vector<std::string> appStatuses_;
	std::vector<std::string> dlpStatuses_;
	std::string sourceIp_;
	std::string saseUserId_;
	long pageSize_;
	std::vector<std::string> nacStatuses_;
	std::string department_;
	std::string innerIp_;
	std::vector<std::string> iaStatuses_;
	std::string deviceBelong_;
	long currentPage_;
	bool sharingStatus_;
	std::vector<std::string> deviceTags_;
	std::vector<std::string> deviceStatuses_;
	std::vector<std::string> paStatuses_;
	std::string sortBy_;
	std::string username_;
};
} // namespace Model
} // namespace Csas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CSAS_MODEL_LISTUSERDEVICESREQUEST_H_
