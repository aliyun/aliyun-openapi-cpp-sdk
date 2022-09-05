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

#ifndef ALIBABACLOUD_CDN_MODEL_SETWAITINGROOMCONFIGREQUEST_H_
#define ALIBABACLOUD_CDN_MODEL_SETWAITINGROOMCONFIGREQUEST_H_

#include <alibabacloud/cdn/CdnExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Cdn {
namespace Model {
class ALIBABACLOUD_CDN_EXPORT SetWaitingRoomConfigRequest : public RpcServiceRequest {
public:
	SetWaitingRoomConfigRequest();
	~SetWaitingRoomConfigRequest();
	std::string getWaitUrl() const;
	void setWaitUrl(const std::string &waitUrl);
	std::string getWaitUri() const;
	void setWaitUri(const std::string &waitUri);
	int getMaxTimeWait() const;
	void setMaxTimeWait(int maxTimeWait);
	std::string getDomainName() const;
	void setDomainName(const std::string &domainName);
	int getAllowPct() const;
	void setAllowPct(int allowPct);
	int getGapTime() const;
	void setGapTime(int gapTime);
	long getOwnerId() const;
	void setOwnerId(long ownerId);

private:
	std::string waitUrl_;
	std::string waitUri_;
	int maxTimeWait_;
	std::string domainName_;
	int allowPct_;
	int gapTime_;
	long ownerId_;
};
} // namespace Model
} // namespace Cdn
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_CDN_MODEL_SETWAITINGROOMCONFIGREQUEST_H_
