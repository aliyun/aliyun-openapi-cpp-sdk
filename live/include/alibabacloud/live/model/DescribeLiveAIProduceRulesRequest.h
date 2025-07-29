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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEAIPRODUCERULESREQUEST_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEAIPRODUCERULESREQUEST_H_

#include <alibabacloud/live/LiveExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Live {
namespace Model {
class ALIBABACLOUD_LIVE_EXPORT DescribeLiveAIProduceRulesRequest : public RpcServiceRequest {
public:
	DescribeLiveAIProduceRulesRequest();
	~DescribeLiveAIProduceRulesRequest();
	std::string getPageNumber() const;
	void setPageNumber(const std::string &pageNumber);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPageSize() const;
	void setPageSize(const std::string &pageSize);
	std::string getRulesId() const;
	void setRulesId(const std::string &rulesId);
	std::string getApp() const;
	void setApp(const std::string &app);
	long getOwnerId() const;
	void setOwnerId(long ownerId);
	std::string getSuffixName() const;
	void setSuffixName(const std::string &suffixName);
	std::string getDomain() const;
	void setDomain(const std::string &domain);

private:
	std::string pageNumber_;
	std::string regionId_;
	std::string pageSize_;
	std::string rulesId_;
	std::string app_;
	long ownerId_;
	std::string suffixName_;
	std::string domain_;
};
} // namespace Model
} // namespace Live
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEAIPRODUCERULESREQUEST_H_
