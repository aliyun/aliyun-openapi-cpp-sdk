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

#ifndef ALIBABACLOUD_LINGMOU_MODEL_CLOSECHATINSTANCESESSIONSRESULT_H_
#define ALIBABACLOUD_LINGMOU_MODEL_CLOSECHATINSTANCESESSIONSRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/lingmou/LingMouExport.h>

namespace AlibabaCloud
{
	namespace LingMou
	{
		namespace Model
		{
			class ALIBABACLOUD_LINGMOU_EXPORT CloseChatInstanceSessionsResult : public ServiceResult
			{
			public:
				struct DataItem
				{
					long createdAt;
					std::string sessionId;
					long mainAccountId;
				};


				CloseChatInstanceSessionsResult();
				explicit CloseChatInstanceSessionsResult(const std::string &payload);
				~CloseChatInstanceSessionsResult();
				std::vector<DataItem> getdata()const;
				std::string getRequestId()const;
				std::string getMessage()const;
				int getHttpStatusCode()const;
				std::string getCode()const;
				bool getSuccess()const;

			protected:
				void parse(const std::string &payload);
			private:
				std::vector<DataItem> data_;
				std::string requestId_;
				std::string message_;
				int httpStatusCode_;
				std::string code_;
				bool success_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_LINGMOU_MODEL_CLOSECHATINSTANCESESSIONSRESULT_H_