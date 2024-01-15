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

#ifndef ALIBABACLOUD_LINKVISUAL_MODEL_QUERYCARPROCESSEVENTSREQUEST_H_
#define ALIBABACLOUD_LINKVISUAL_MODEL_QUERYCARPROCESSEVENTSREQUEST_H_

#include <alibabacloud/linkvisual/LinkvisualExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Linkvisual {
namespace Model {
class ALIBABACLOUD_LINKVISUAL_EXPORT QueryCarProcessEventsRequest : public RpcServiceRequest {
public:
	QueryCarProcessEventsRequest();
	~QueryCarProcessEventsRequest();
	int getActionType() const;
	void setActionType(int actionType);
	std::string getSubProductKey() const;
	void setSubProductKey(const std::string &subProductKey);
	std::string getPlateNo() const;
	void setPlateNo(const std::string &plateNo);
	std::string getIotId() const;
	void setIotId(const std::string &iotId);
	std::string getSubDeviceName() const;
	void setSubDeviceName(const std::string &subDeviceName);
	std::string getIotInstanceId() const;
	void setIotInstanceId(const std::string &iotInstanceId);
	int getPageSize() const;
	void setPageSize(int pageSize);
	long getEndTime() const;
	void setEndTime(long endTime);
	long getBeginTime() const;
	void setBeginTime(long beginTime);
	int getCurrentPage() const;
	void setCurrentPage(int currentPage);
	int getAreaIndex() const;
	void setAreaIndex(int areaIndex);
	std::string getApiProduct() const;
	void setApiProduct(const std::string &apiProduct);
	std::string getApiRevision() const;
	void setApiRevision(const std::string &apiRevision);
	std::string getSubIotId() const;
	void setSubIotId(const std::string &subIotId);

private:
	int actionType_;
	std::string subProductKey_;
	std::string plateNo_;
	std::string iotId_;
	std::string subDeviceName_;
	std::string iotInstanceId_;
	int pageSize_;
	long endTime_;
	long beginTime_;
	int currentPage_;
	int areaIndex_;
	std::string apiProduct_;
	std::string apiRevision_;
	std::string subIotId_;
};
} // namespace Model
} // namespace Linkvisual
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LINKVISUAL_MODEL_QUERYCARPROCESSEVENTSREQUEST_H_
