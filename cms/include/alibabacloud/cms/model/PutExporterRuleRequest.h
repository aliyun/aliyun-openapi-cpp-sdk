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

#ifndef ALIBABACLOUD_CMS_MODEL_PUTEXPORTERRULEREQUEST_H_
#define ALIBABACLOUD_CMS_MODEL_PUTEXPORTERRULEREQUEST_H_

#include <string>
#include <vector>
#include <alibabacloud/core/RpcServiceRequest.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT PutExporterRuleRequest : public RpcServiceRequest
			{

			public:
				PutExporterRuleRequest();
				~PutExporterRuleRequest();

				std::string getRuleName()const;
				void setRuleName(const std::string& ruleName);
				std::vector<std::string> getDstNames()const;
				void setDstNames(const std::vector<std::string>& dstNames);
				std::string get_Namespace()const;
				void set_Namespace(const std::string& _namespace);
				std::string getTargetWindows()const;
				void setTargetWindows(const std::string& targetWindows);
				std::string getDescribe()const;
				void setDescribe(const std::string& describe);
				std::string getMetricName()const;
				void setMetricName(const std::string& metricName);

            private:
				std::string ruleName_;
				std::vector<std::string> dstNames_;
				std::string _namespace_;
				std::string targetWindows_;
				std::string describe_;
				std::string metricName_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_PUTEXPORTERRULEREQUEST_H_