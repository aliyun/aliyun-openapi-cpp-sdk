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

#ifndef ALIBABACLOUD_SCSP_MODEL_UPDATERINGSTATUSREQUEST_H_
#define ALIBABACLOUD_SCSP_MODEL_UPDATERINGSTATUSREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/scsp/ScspExport.h>

namespace AlibabaCloud
{
	namespace Scsp
	{
		namespace Model
		{
			class ALIBABACLOUD_SCSP_EXPORT UpdateRingStatusRequest : public RpcServiceRequest
			{

			public:
				UpdateRingStatusRequest();
				~UpdateRingStatusRequest();

				std::string getInstanceId()const;
				void setInstanceId(const std::string& instanceId);
				std::string getExtra()const;
				void setExtra(const std::string& extra);
				std::string getCallOutStatus()const;
				void setCallOutStatus(const std::string& callOutStatus);
				std::string getUniqueBizId()const;
				void setUniqueBizId(const std::string& uniqueBizId);

            private:
				std::string instanceId_;
				std::string extra_;
				std::string callOutStatus_;
				std::string uniqueBizId_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_SCSP_MODEL_UPDATERINGSTATUSREQUEST_H_