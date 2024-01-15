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

#ifndef ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEMESSAGEAPPRESULT_H_
#define ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEMESSAGEAPPRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/live/LiveExport.h>

namespace AlibabaCloud
{
	namespace Live
	{
		namespace Model
		{
			class ALIBABACLOUD_LIVE_EXPORT DescribeLiveMessageAppResult : public ServiceResult
			{
			public:


				DescribeLiveMessageAppResult();
				explicit DescribeLiveMessageAppResult(const std::string &payload);
				~DescribeLiveMessageAppResult();
				std::string getCallbackUrl()const;
				long getModifyTime()const;
				std::string getAuditUrl()const;
				std::string getDataCenter()const;
				std::string getAppId()const;
				int getAuditType()const;
				std::string getAppKey()const;
				long getCreateTime()const;
				std::string getEventCallbackUrl()const;
				std::string getAppSign()const;
				bool getDisable()const;
				std::string getAppName()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::string callbackUrl_;
				long modifyTime_;
				std::string auditUrl_;
				std::string dataCenter_;
				std::string appId_;
				int auditType_;
				std::string appKey_;
				long createTime_;
				std::string eventCallbackUrl_;
				std::string appSign_;
				bool disable_;
				std::string appName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LIVE_MODEL_DESCRIBELIVEMESSAGEAPPRESULT_H_