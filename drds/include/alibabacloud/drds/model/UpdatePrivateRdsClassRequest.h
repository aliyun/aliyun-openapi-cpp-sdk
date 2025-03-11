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

#ifndef ALIBABACLOUD_DRDS_MODEL_UPDATEPRIVATERDSCLASSREQUEST_H_
#define ALIBABACLOUD_DRDS_MODEL_UPDATEPRIVATERDSCLASSREQUEST_H_

#include <alibabacloud/drds/DrdsExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace Drds {
namespace Model {
class ALIBABACLOUD_DRDS_EXPORT UpdatePrivateRdsClassRequest : public RpcServiceRequest {
public:
	UpdatePrivateRdsClassRequest();
	~UpdatePrivateRdsClassRequest();
	std::string getStorage() const;
	void setStorage(const std::string &storage);
	bool getAutoUseCoupon() const;
	void setAutoUseCoupon(bool autoUseCoupon);
	std::string getDrdsInstanceId() const;
	void setDrdsInstanceId(const std::string &drdsInstanceId);
	std::string getRdsClass() const;
	void setRdsClass(const std::string &rdsClass);
	int getPrePayDuration() const;
	void setPrePayDuration(int prePayDuration);
	std::string getAccessKeyId() const;
	void setAccessKeyId(const std::string &accessKeyId);
	std::string getDBInstanceId() const;
	void setDBInstanceId(const std::string &dBInstanceId);

private:
	std::string storage_;
	bool autoUseCoupon_;
	std::string drdsInstanceId_;
	std::string rdsClass_;
	int prePayDuration_;
	std::string accessKeyId_;
	std::string dBInstanceId_;
};
} // namespace Model
} // namespace Drds
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_DRDS_MODEL_UPDATEPRIVATERDSCLASSREQUEST_H_
