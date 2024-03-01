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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVECDNDIAGNOSEINFOREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVECDNDIAGNOSEINFOREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeLiveCdnDiagnoseInfoRequest : public RpcServiceRequest {
public:
	DescribeLiveCdnDiagnoseInfoRequest();
	~DescribeLiveCdnDiagnoseInfoRequest();
	std::string getIntervalType() const;
	void setIntervalType(const std::string &intervalType);
	std::string getStreamSuffix() const;
	void setStreamSuffix(const std::string &streamSuffix);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::string getRequestType() const;
	void setRequestType(const std::string &requestType);
	std::string getSecurityToken() const;
	void setSecurityToken(const std::string &securityToken);
	std::string getStreamName() const;
	void setStreamName(const std::string &streamName);
	std::string getApp() const;
	void setApp(const std::string &app);
	int getPhase() const;
	void setPhase(int phase);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getDomain() const;
	void setDomain(const std::string &domain);

private:
	std::string intervalType_;
	std::string streamSuffix_;
	long startTime_;
	std::string requestType_;
	std::string securityToken_;
	std::string streamName_;
	std::string app_;
	int phase_;
	long endTime_;
	std::string domain_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVECDNDIAGNOSEINFOREQUEST_H_
