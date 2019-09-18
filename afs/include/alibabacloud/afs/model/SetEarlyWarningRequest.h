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

#ifndef ALIBABACLOUD_AFS_MODEL_SETEARLYWARNINGREQUEST_H_
#define ALIBABACLOUD_AFS_MODEL_SETEARLYWARNINGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/afs/AfsExport.h>

namespace AlibabaCloud
{
	namespace Afs
	{
		namespace Model
		{
			class ALIBABACLOUD_AFS_EXPORT SetEarlyWarningRequest : public RpcServiceRequest
			{

			public:
				SetEarlyWarningRequest();
				~SetEarlyWarningRequest();

				std::string getTimeEnd()const;
				void setTimeEnd(const std::string& timeEnd);
				std::string getChannel()const;
				void setChannel(const std::string& channel);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getFrequency()const;
				void setFrequency(const std::string& frequency);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				bool getWarnOpen()const;
				void setWarnOpen(bool warnOpen);
				bool getTimeOpen()const;
				void setTimeOpen(bool timeOpen);
				std::string getTimeBegin()const;
				void setTimeBegin(const std::string& timeBegin);

            private:
				std::string timeEnd_;
				std::string channel_;
				std::string title_;
				std::string frequency_;
				std::string sourceIp_;
				bool warnOpen_;
				bool timeOpen_;
				std::string timeBegin_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AFS_MODEL_SETEARLYWARNINGREQUEST_H_