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

#ifndef ALIBABACLOUD_ARMS_MODEL_QUERYAPPTOPOLOGYREQUEST_H_
#define ALIBABACLOUD_ARMS_MODEL_QUERYAPPTOPOLOGYREQUEST_H_

#include <alibabacloud/arms/ARMSExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace ARMS {
namespace Model {
class ALIBABACLOUD_ARMS_EXPORT QueryAppTopologyRequest : public RpcServiceRequest {
public:
	QueryAppTopologyRequest();
	~QueryAppTopologyRequest();
	std::string getRpc() const;
	void setRpc(const std::string &rpc);
	std::string getAppType() const;
	void setAppType(const std::string &appType);
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getPid() const;
	void setPid(const std::string &pid);
	long getStartTime() const;
	void setStartTime(long startTime);
	std::map<std::string, std::string> getFilters() const;
	void setFilters(const std::map<std::string, std::string> &filters);
	std::string getType() const;
	void setType(const std::string &type);
	std::string getDbName() const;
	void setDbName(const std::string &dbName);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::string getDb() const;
	void setDb(const std::string &db);

private:
	std::string rpc_;
	std::string appType_;
	long endTime_;
	std::string pid_;
	long startTime_;
	std::map<std::string, std::string> filters_;
	std::string type_;
	std::string dbName_;
	std::string regionId_;
	std::string db_;
};
} // namespace Model
} // namespace ARMS
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_ARMS_MODEL_QUERYAPPTOPOLOGYREQUEST_H_
