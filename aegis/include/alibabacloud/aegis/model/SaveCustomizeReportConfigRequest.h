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

#ifndef ALIBABACLOUD_AEGIS_MODEL_SAVECUSTOMIZEREPORTCONFIGREQUEST_H_
#define ALIBABACLOUD_AEGIS_MODEL_SAVECUSTOMIZEREPORTCONFIGREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/aegis/AegisExport.h>

namespace AlibabaCloud
{
	namespace Aegis
	{
		namespace Model
		{
			class ALIBABACLOUD_AEGIS_EXPORT SaveCustomizeReportConfigRequest : public RpcServiceRequest
			{

			public:
				SaveCustomizeReportConfigRequest();
				~SaveCustomizeReportConfigRequest();

				int getReportSendType()const;
				void setReportSendType(int reportSendType);
				int getReportType()const;
				void setReportType(int reportType);
				long getReportId()const;
				void setReportId(long reportId);
				std::string getReportEndDate()const;
				void setReportEndDate(const std::string& reportEndDate);
				std::string getReportLang()const;
				void setReportLang(const std::string& reportLang);
				std::string getTitle()const;
				void setTitle(const std::string& title);
				std::string getSourceIp()const;
				void setSourceIp(const std::string& sourceIp);
				std::string getReportStartDate()const;
				void setReportStartDate(const std::string& reportStartDate);
				std::string getLang()const;
				void setLang(const std::string& lang);
				int getReportStatus()const;
				void setReportStatus(int reportStatus);
				std::string getRecipients()const;
				void setRecipients(const std::string& recipients);
				std::string getSendTime()const;
				void setSendTime(const std::string& sendTime);

            private:
				int reportSendType_;
				int reportType_;
				long reportId_;
				std::string reportEndDate_;
				std::string reportLang_;
				std::string title_;
				std::string sourceIp_;
				std::string reportStartDate_;
				std::string lang_;
				int reportStatus_;
				std::string recipients_;
				std::string sendTime_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_AEGIS_MODEL_SAVECUSTOMIZEREPORTCONFIGREQUEST_H_