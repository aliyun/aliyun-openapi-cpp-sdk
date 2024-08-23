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

#ifndef ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONSCOREHISTORYREQUEST_H_
#define ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONSCOREHISTORYREQUEST_H_

#include <alibabacloud/governance/GovernanceExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Governance {
namespace Model {
class ALIBABACLOUD_GOVERNANCE_EXPORT ListEvaluationScoreHistoryRequest : public RpcServiceRequest {
public:
	ListEvaluationScoreHistoryRequest();
	~ListEvaluationScoreHistoryRequest();
	std::string getStartDate() const;
	void setStartDate(const std::string &startDate);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getPartnerCode() const;
	void setPartnerCode(const std::string &partnerCode);
	std::string getEndDate() const;
	void setEndDate(const std::string &endDate);
	bool getShowScoreDiff() const;
	void setShowScoreDiff(bool showScoreDiff);

private:
	std::string startDate_;
	std::string regionId_;
	std::string partnerCode_;
	std::string endDate_;
	bool showScoreDiff_;
};
} // namespace Model
} // namespace Governance
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_GOVERNANCE_MODEL_LISTEVALUATIONSCOREHISTORYREQUEST_H_
