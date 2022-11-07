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

#ifndef ALIBABACLOUD_CC5G_MODEL_LISTWIRELESSCLOUDCONNECTORGROUPSREQUEST_H_
#define ALIBABACLOUD_CC5G_MODEL_LISTWIRELESSCLOUDCONNECTORGROUPSREQUEST_H_

#include <alibabacloud/cc5g/CC5GExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace CC5G {
namespace Model {
class ALIBABACLOUD_CC5G_EXPORT ListWirelessCloudConnectorGroupsRequest : public RpcServiceRequest {
public:
	ListWirelessCloudConnectorGroupsRequest();
	~ListWirelessCloudConnectorGroupsRequest();
	std::vector<std::string> getWirelessCloudConnectorGroupStatus() const;
	void setWirelessCloudConnectorGroupStatus(const std::vector<std::string> &wirelessCloudConnectorGroupStatus);
	std::vector<std::string> getWirelessCloudConnectorGroupIds() const;
	void setWirelessCloudConnectorGroupIds(const std::vector<std::string> &wirelessCloudConnectorGroupIds);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	std::vector<std::string> getWirelessCloudConnectorGroupNames() const;
	void setWirelessCloudConnectorGroupNames(const std::vector<std::string> &wirelessCloudConnectorGroupNames);
	long getMaxResults() const;
	void setMaxResults(long maxResults);

private:
	std::vector<std::string> wirelessCloudConnectorGroupStatus_;
	std::vector<std::string> wirelessCloudConnectorGroupIds_;
	std::string regionId_;
	std::string nextToken_;
	std::vector<std::string> wirelessCloudConnectorGroupNames_;
	long maxResults_;
};
} // namespace Model
} // namespace CC5G
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CC5G_MODEL_LISTWIRELESSCLOUDCONNECTORGROUPSREQUEST_H_
