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

#ifndef ALIBABACLOUD_WEBSITEBUILD_MODEL_OPERATEAPPINSTANCEFORPARTNERREQUEST_H_
#define ALIBABACLOUD_WEBSITEBUILD_MODEL_OPERATEAPPINSTANCEFORPARTNERREQUEST_H_

#include <alibabacloud/websitebuild/WebsiteBuildExport.h>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <string>
#include <vector>
#include <map>

namespace AlibabaCloud {
namespace WebsiteBuild {
namespace Model {
class ALIBABACLOUD_WEBSITEBUILD_EXPORT OperateAppInstanceForPartnerRequest : public RpcServiceRequest {
public:
	OperateAppInstanceForPartnerRequest();
	~OperateAppInstanceForPartnerRequest();
	std::string getExtend() const;
	void setExtend(const std::string &extend);
	std::string getOperateEvent() const;
	void setOperateEvent(const std::string &operateEvent);

private:
	std::string extend_;
	std::string operateEvent_;
};
} // namespace Model
} // namespace WebsiteBuild
} // namespace AlibabaCloud
#endif // !ALIBABACLOUD_WEBSITEBUILD_MODEL_OPERATEAPPINSTANCEFORPARTNERREQUEST_H_
