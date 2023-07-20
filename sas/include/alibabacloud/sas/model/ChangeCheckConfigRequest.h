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

#ifndef ALIBABACLOUD_SAS_MODEL_CHANGECHECKCONFIGREQUEST_H_
#define ALIBABACLOUD_SAS_MODEL_CHANGECHECKCONFIGREQUEST_H_

#include <alibabacloud/sas/SasExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Sas {
namespace Model {
class ALIBABACLOUD_SAS_EXPORT ChangeCheckConfigRequest : public RpcServiceRequest {
public:
	struct RemovedCheck {
		long sectionId;
		long checkId;
	};
	struct AddedCheck {
		long sectionId;
		long checkId;
	};
	ChangeCheckConfigRequest();
	~ChangeCheckConfigRequest();
	std::vector<long> getStandardIds() const;
	void setStandardIds(const std::vector<long> &standardIds);
	std::vector<int> getCycleDays() const;
	void setCycleDays(const std::vector<int> &cycleDays);
	int getStartTime() const;
	void setStartTime(int startTime);
	std::string getSourceIp() const;
	void setSourceIp(const std::string &sourceIp);
	std::string getRegionId() const;
	void setRegionId(const std::string &regionId);
	std::vector<RemovedCheck> getRemovedCheck() const;
	void setRemovedCheck(const std::vector<RemovedCheck> &removedCheck);
	bool getEnableAddCheck() const;
	void setEnableAddCheck(bool enableAddCheck);
	bool getEnableAutoCheck() const;
	void setEnableAutoCheck(bool enableAutoCheck);
	int getEndTime() const;
	void setEndTime(int endTime);
	std::vector<AddedCheck> getAddedCheck() const;
	void setAddedCheck(const std::vector<AddedCheck> &addedCheck);

private:
	std::vector<long> standardIds_;
	std::vector<int> cycleDays_;
	int startTime_;
	std::string sourceIp_;
	std::string regionId_;
	std::vector<RemovedCheck> removedCheck_;
	bool enableAddCheck_;
	bool enableAutoCheck_;
	int endTime_;
	std::vector<AddedCheck> addedCheck_;
};
} // namespace Model
} // namespace Sas
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_SAS_MODEL_CHANGECHECKCONFIGREQUEST_H_
