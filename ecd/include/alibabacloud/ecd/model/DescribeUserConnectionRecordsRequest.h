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

#ifndef ALIBABACLOUD_ECD_MODEL_DESCRIBEUSERCONNECTIONRECORDSREQUEST_H_
#define ALIBABACLOUD_ECD_MODEL_DESCRIBEUSERCONNECTIONRECORDSREQUEST_H_

#include <alibabacloud/ecd/EcdExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Ecd {
namespace Model {
class ALIBABACLOUD_ECD_EXPORT DescribeUserConnectionRecordsRequest : public RpcServiceRequest {
public:
	DescribeUserConnectionRecordsRequest();
	~DescribeUserConnectionRecordsRequest();
	long getConnectEndTimeFrom() const;
	void setConnectEndTimeFrom(long connectEndTimeFrom);
	long getConnectDurationFrom() const;
	void setConnectDurationFrom(long connectDurationFrom);
	long getConnectDurationTo() const;
	void setConnectDurationTo(long connectDurationTo);
	std::string getEndUserType() const;
	void setEndUserType(const std::string &endUserType);
	std::string getDesktopGroupId() const;
	void setDesktopGroupId(const std::string &desktopGroupId);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getNextToken() const;
	void setNextToken(const std::string &nextToken);
	long getConnectStartTimeFrom() const;
	void setConnectStartTimeFrom(long connectStartTimeFrom);
	std::string getEndUserId() const;
	void setEndUserId(const std::string &endUserId);
	std::string getDesktopId() const;
	void setDesktopId(const std::string &desktopId);
	long getConnectEndTimeTo() const;
	void setConnectEndTimeTo(long connectEndTimeTo);
	long getConnectStartTimeTo() const;
	void setConnectStartTimeTo(long connectStartTimeTo);
	int getMaxResults() const;
	void setMaxResults(int maxResults);

private:
	long connectEndTimeFrom_;
	long connectDurationFrom_;
	long connectDurationTo_;
	std::string endUserType_;
	std::string desktopGroupId_;
	std::string regionId_;
	std::string nextToken_;
	long connectStartTimeFrom_;
	std::string endUserId_;
	std::string desktopId_;
	long connectEndTimeTo_;
	long connectStartTimeTo_;
	int maxResults_;
};
} // namespace Model
} // namespace Ecd
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ECD_MODEL_DESCRIBEUSERCONNECTIONRECORDSREQUEST_H_
