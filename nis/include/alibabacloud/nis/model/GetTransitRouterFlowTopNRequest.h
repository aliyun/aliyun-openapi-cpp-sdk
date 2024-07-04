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

#ifndef ALIBABACLOUD_NIS_MODEL_GETTRANSITROUTERFLOWTOPNREQUEST_H_
#define ALIBABACLOUD_NIS_MODEL_GETTRANSITROUTERFLOWTOPNREQUEST_H_

#include <alibabacloud/nis/NisExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Nis {
namespace Model {
class ALIBABACLOUD_NIS_EXPORT GetTransitRouterFlowTopNRequest : public RpcServiceRequest {
public:
	GetTransitRouterFlowTopNRequest();
	~GetTransitRouterFlowTopNRequest();
	std::string getOtherPort() const;
	void setOtherPort(const std::string &otherPort);
	int getTopN() const;
	void setTopN(int topN);
	std::string getProtocol() const;
	void setProtocol(const std::string &protocol);
	std::string getThisIp() const;
	void setThisIp(const std::string &thisIp);
	std::string getOtherIp() const;
	void setOtherIp(const std::string &otherIp);
	std::string getBandwithPackageId() const;
	void setBandwithPackageId(const std::string &bandwithPackageId);
	std::string getOrderBy() const;
	void setOrderBy(const std::string &orderBy);
	std::string getSort() const;
	void setSort(const std::string &sort);
	bool getUseMultiAccount() const;
	void setUseMultiAccount(bool useMultiAccount);
	std::string getThisRegion() const;
	void setThisRegion(const std::string &thisRegion);
	std::string getCenId() const;
	void setCenId(const std::string &cenId);
	std::string getThisPort() const;
	void setThisPort(const std::string &thisPort);
	std::string getDirection() const;
	void setDirection(const std::string &direction);
	std::string getOtherRegion() const;
	void setOtherRegion(const std::string &otherRegion);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);
	std::string getGroupBy() const;
	void setGroupBy(const std::string &groupBy);
	std::vector<long> getAccountIds() const;
	void setAccountIds(const std::vector<long> &accountIds);

private:
	std::string otherPort_;
	int topN_;
	std::string protocol_;
	std::string thisIp_;
	std::string otherIp_;
	std::string bandwithPackageId_;
	std::string orderBy_;
	std::string sort_;
	bool useMultiAccount_;
	std::string thisRegion_;
	std::string cenId_;
	std::string thisPort_;
	std::string direction_;
	std::string otherRegion_;
	long endTime_;
	long beginTime_;
	std::string groupBy_;
	std::vector<long> accountIds_;
};
} // namespace Model
} // namespace Nis
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_NIS_MODEL_GETTRANSITROUTERFLOWTOPNREQUEST_H_
