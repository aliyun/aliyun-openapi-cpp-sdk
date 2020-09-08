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

#ifndef ALIBABACLOUD_TDSR_MODEL_CHECKRESOURCEREQUEST_H_
#define ALIBABACLOUD_TDSR_MODEL_CHECKRESOURCEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/tdsr/TdsrExport.h>

namespace AlibabaCloud
{
	namespace Tdsr
	{
		namespace Model
		{
			class ALIBABACLOUD_TDSR_EXPORT CheckResourceRequest : public RpcServiceRequest
			{

			public:
				CheckResourceRequest();
				~CheckResourceRequest();

				std::string getCountry()const;
				void setCountry(const std::string& country);
				long getHid()const;
				void setHid(long hid);
				long getLevel()const;
				void setLevel(long level);
				std::string getInvoker()const;
				void setInvoker(const std::string& invoker);
				std::string getMessage()const;
				void setMessage(const std::string& message);
				std::string getUrl()const;
				void setUrl(const std::string& url);
				bool getSuccess()const;
				void setSuccess(bool success);
				bool getInterrupt()const;
				void setInterrupt(bool interrupt);
				std::string getGmtWakeup()const;
				void setGmtWakeup(const std::string& gmtWakeup);
				std::string getPk()const;
				void setPk(const std::string& pk);
				std::string getBid()const;
				void setBid(const std::string& bid);
				std::string getPrompt()const;
				void setPrompt(const std::string& prompt);
				std::string getTaskExtraData()const;
				void setTaskExtraData(const std::string& taskExtraData);
				std::string getTaskIdentifier()const;
				void setTaskIdentifier(const std::string& taskIdentifier);

            private:
				std::string country_;
				long hid_;
				long level_;
				std::string invoker_;
				std::string message_;
				std::string url_;
				bool success_;
				bool interrupt_;
				std::string gmtWakeup_;
				std::string pk_;
				std::string bid_;
				std::string prompt_;
				std::string taskExtraData_;
				std::string taskIdentifier_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TDSR_MODEL_CHECKRESOURCEREQUEST_H_