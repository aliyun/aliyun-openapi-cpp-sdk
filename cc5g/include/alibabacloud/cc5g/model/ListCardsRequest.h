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

#ifndef ALIBABACLOUD_CC5G_MODEL_LISTCARDSREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_LISTCARDSREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT ListCardsRequest : public RpcServiceRequest {
public:
	ListCardsRequest();
	~ListCardsRequest();
	std::string getIpAddress() const;
	void setIpAddress(const std::string &ipAddress);
	std::vector<std::string> getIccids() const;
	void setIccids(const std::vector<std::string> &iccids);
	std::string getIccid() const;
	void setIccid(const std::string &iccid);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	bool getLock() const;
	void setLock(bool lock);
	std::string getMsisdn() const;
	void setMsisdn(const std::string &msisdn);
	std::string getApn() const;
	void setApn(const std::string &apn);
	std::string getNetLinkId() const;
	void setNetLinkId(const std::string &netLinkId);
	std::string getWirelessCloudConnectorId() const;
	void setWirelessCloudConnectorId(const std::string &wirelessCloudConnectorId);
	bool getOnline() const;
	void setOnline(bool online);
	long getMaxResults() const;
	void setMaxResults(long maxResults);
	std::vector<std::string> getStatuses() const;
	void setStatuses(const std::vector<std::string> &statuses);

private:
	std::string ipAddress_;
	std::vector<std::string> iccids_;
	std::string iccid_;
	std::string nextToken_;
	bool lock_;
	std::string msisdn_;
	std::string apn_;
	std::string netLinkId_;
	std::string wirelessCloudConnectorId_;
	bool online_;
	long maxResults_;
	std::vector<std::string> statuses_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_LISTCARDSREQUEST_H_
