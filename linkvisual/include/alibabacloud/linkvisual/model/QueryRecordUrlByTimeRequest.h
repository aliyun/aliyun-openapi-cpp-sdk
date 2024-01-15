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

#ifndef ALIBABACLOUD_LINKVISUAL_MODEL_QUERYRECORDURLBYTIMEREQUEST_H_
#define ALIBABACLOUD_LINKVISUAL_MODEL_QUERYRECORDURLBYTIMEREQUEST_H_

#include <alibabacloud/linkvisual/LinkvisualExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Linkvisual {
namespace Model {
class ALIBABACLOUD_LINKVISUAL_EXPORT QueryRecordUrlByTimeRequest : public RpcServiceRequest {
public:
	QueryRecordUrlByTimeRequest();
	~QueryRecordUrlByTimeRequest();
	std::string getIotId() const;
	void setIotId(const std::string &iotId);
	std::string getIotInstanceId() const;
	void setIotInstanceId(const std::string &iotInstanceId);
	int getStreamType() const;
	void setStreamType(int streamType);
	int getEndTime() const;
	void setEndTime(int endTime);
	int getBeginTime() const;
	void setBeginTime(int beginTime);
	std::string getProductKey() const;
	void setProductKey(const std::string &productKey);
	std::string getApiProduct() const;
	void setApiProduct(const std::string &apiProduct);
	std::string getApiRevision() const;
	void setApiRevision(const std::string &apiRevision);
	std::string getDeviceName() const;
	void setDeviceName(const std::string &deviceName);
	int getUrlValidDuration() const;
	void setUrlValidDuration(int urlValidDuration);

private:
	std::string iotId_;
	std::string iotInstanceId_;
	int streamType_;
	int endTime_;
	int beginTime_;
	std::string productKey_;
	std::string apiProduct_;
	std::string apiRevision_;
	std::string deviceName_;
	int urlValidDuration_;
};
} // namespace Model
} // namespace Linkvisual
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_LINKVISUAL_MODEL_QUERYRECORDURLBYTIMEREQUEST_H_
