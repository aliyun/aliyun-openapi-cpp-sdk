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

#ifndef ALIBABACLOUD_MSE_MODEL_LISTALARMHISTORIESREQUEST_H_
#define ALIBABACLOUD_MSE_MODEL_LISTALARMHISTORIESREQUEST_H_

#include <alibabacloud/mse/MseExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Mse {
namespace Model {
class ALIBABACLOUD_MSE_EXPORT ListAlarmHistoriesRequest : public RpcServiceRequest {
public:
	ListAlarmHistoriesRequest();
	~ListAlarmHistoriesRequest();
	long getEndTime() const;
	void setEndTime(long endTime);
	std::string getAlarmMseType() const;
	void setAlarmMseType(const std::string &alarmMseType);
	long getStartTime() const;
	void setStartTime(long startTime);
	int getPageNum() const;
	void setPageNum(int pageNum);
	std::string getRequestPars() const;
	void setRequestPars(const std::string &requestPars);
	int getPageSize() const;
	void setPageSize(int pageSize);
	std::string getAcceptLanguage() const;
	void setAcceptLanguage(const std::string &acceptLanguage);
	std::string getAlarmName() const;
	void setAlarmName(const std::string &alarmName);

private:
	long endTime_;
	std::string alarmMseType_;
	long startTime_;
	int pageNum_;
	std::string requestPars_;
	int pageSize_;
	std::string acceptLanguage_;
	std::string alarmName_;
};
} // namespace Model
} // namespace Mse
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_MSE_MODEL_LISTALARMHISTORIESREQUEST_H_
