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

#ifndef ALIBABACLOUD_TRADEMARK_MODEL_QUERYSUPPLEMENTDETAILRESULT_H_
#define ALIBABACLOUD_TRADEMARK_MODEL_QUERYSUPPLEMENTDETAILRESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/trademark/TrademarkExport.h>

namespace AlibabaCloud
{
	namespace Trademark
	{
		namespace Model
		{
			class ALIBABACLOUD_TRADEMARK_EXPORT QuerySupplementDetailResult : public ServiceResult
			{
			public:


				QuerySupplementDetailResult();
				explicit QuerySupplementDetailResult(const std::string &payload);
				~QuerySupplementDetailResult();
				int getStatus()const;
				long getSendTime()const;
				long getSbjDeadTime()const;
				std::string getTmNumber()const;
				long getOperateTime()const;
				std::string getUploadFileTemplateUrl()const;
				int getType()const;
				std::string getSerialNumber()const;
				std::string getContent()const;
				long getAcceptDeadTime()const;
				std::vector<std::string> getFileTemplateUrls()const;
				long getAcceptTime()const;
				long getId()const;

			protected:
				void parse(const std::string &payload);
			private:
				int status_;
				long sendTime_;
				long sbjDeadTime_;
				std::string tmNumber_;
				long operateTime_;
				std::string uploadFileTemplateUrl_;
				int type_;
				std::string serialNumber_;
				std::string content_;
				long acceptDeadTime_;
				std::vector<std::string> fileTemplateUrls_;
				long acceptTime_;
				long id_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_TRADEMARK_MODEL_QUERYSUPPLEMENTDETAILRESULT_H_