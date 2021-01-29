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

#ifndef ALIBABACLOUD_CDRS_MODEL_UPDATEMONITORREQUEST_H_
#define ALIBABACLOUD_CDRS_MODEL_UPDATEMONITORREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cdrs/CDRSExport.h>

namespace AlibabaCloud
{
	namespace CDRS
	{
		namespace Model
		{
			class ALIBABACLOUD_CDRS_EXPORT UpdateMonitorRequest : public RpcServiceRequest
			{

			public:
				UpdateMonitorRequest();
				~UpdateMonitorRequest();

				std::string getCorpId()const;
				void setCorpId(const std::string& corpId);
				std::string getDescription()const;
				void setDescription(const std::string& description);
				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::string getPicOperateType()const;
				void setPicOperateType(const std::string& picOperateType);
				std::string getAttributeName()const;
				void setAttributeName(const std::string& attributeName);
				std::string getAttributeOperateType()const;
				void setAttributeOperateType(const std::string& attributeOperateType);
				std::string getRuleExpression()const;
				void setRuleExpression(const std::string& ruleExpression);
				int getNotifierTimeOut()const;
				void setNotifierTimeOut(int notifierTimeOut);
				std::string getTaskId()const;
				void setTaskId(const std::string& taskId);
				std::string getDeviceOperateType()const;
				void setDeviceOperateType(const std::string& deviceOperateType);
				std::string getPicList()const;
				void setPicList(const std::string& picList);
				std::string getAttributeValueList()const;
				void setAttributeValueList(const std::string& attributeValueList);
				std::string getNotifierAppSecret()const;
				void setNotifierAppSecret(const std::string& notifierAppSecret);
				std::string getNotifierExtendValues()const;
				void setNotifierExtendValues(const std::string& notifierExtendValues);
				std::string getDeviceList()const;
				void setDeviceList(const std::string& deviceList);
				std::string getNotifierUrl()const;
				void setNotifierUrl(const std::string& notifierUrl);
				std::string getNotifierType()const;
				void setNotifierType(const std::string& notifierType);
				std::string getBizId()const;
				void setBizId(const std::string& bizId);
				std::string getAlgorithmVendor()const;
				void setAlgorithmVendor(const std::string& algorithmVendor);

            private:
				std::string corpId_;
				std::string description_;
				std::string ruleName_;
				std::string picOperateType_;
				std::string attributeName_;
				std::string attributeOperateType_;
				std::string ruleExpression_;
				int notifierTimeOut_;
				std::string taskId_;
				std::string deviceOperateType_;
				std::string picList_;
				std::string attributeValueList_;
				std::string notifierAppSecret_;
				std::string notifierExtendValues_;
				std::string deviceList_;
				std::string notifierUrl_;
				std::string notifierType_;
				std::string bizId_;
				std::string algorithmVendor_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CDRS_MODEL_UPDATEMONITORREQUEST_H_