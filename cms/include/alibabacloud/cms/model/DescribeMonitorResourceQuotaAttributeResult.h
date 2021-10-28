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

#ifndef ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESULT_H_
#define ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESULT_H_

#include <string>
#include <vector>
#include <utility>
#include <alibabacloud/core/ServiceResult.h>
#include <alibabacloud/cms/CmsExport.h>

namespace AlibabaCloud
{
	namespace Cms
	{
		namespace Model
		{
			class ALIBABACLOUD_CMS_EXPORT DescribeMonitorResourceQuotaAttributeResult : public ServiceResult
			{
			public:
				struct ResourceQuota
				{
					struct SiteMonitorEcsProbe
					{
						int quotaUsed;
						int quotaPackage;
						int quotaLimit;
					};
					struct SiteMonitorOperatorProbe
					{
						int quotaUsed;
						int quotaPackage;
						int quotaLimit;
					};
					struct SiteMonitorTask
					{
						int quotaUsed;
						int quotaPackage;
						int quotaLimit;
					};
					struct CustomMonitor
					{
						int quotaUsed;
						int quotaPackage;
						int quotaLimit;
					};
					struct EventMonitor
					{
						int quotaUsed;
						int quotaPackage;
						int quotaLimit;
					};
					struct LogMonitor
					{
						int quotaUsed;
						int quotaPackage;
						int quotaLimit;
					};
					struct Api
					{
						int quotaUsed;
						int quotaPackage;
						int quotaLimit;
					};
					struct SMS
					{
						int quotaUsed;
						int quotaPackage;
						int quotaLimit;
					};
					struct Phone
					{
						int quotaUsed;
						int quotaPackage;
						int quotaLimit;
					};
					struct EnterpriseQuota
					{
						std::string instanceId;
						std::string suitInfo;
					};
					struct NAAM
					{
						std::string instanceId;
						std::string suitInfo;
						std::string effectTime;
					};
					SiteMonitorOperatorProbe siteMonitorOperatorProbe;
					std::string instanceId;
					LogMonitor logMonitor;
					std::string cRMType;
					EnterpriseQuota enterpriseQuota;
					Phone phone;
					std::string suitInfo;
					SiteMonitorTask siteMonitorTask;
					SMS sMS;
					Api api;
					NAAM nAAM;
					SiteMonitorEcsProbe siteMonitorEcsProbe;
					std::string expireTime;
					CustomMonitor customMonitor;
					EventMonitor eventMonitor;
				};


				DescribeMonitorResourceQuotaAttributeResult();
				explicit DescribeMonitorResourceQuotaAttributeResult(const std::string &payload);
				~DescribeMonitorResourceQuotaAttributeResult();
				ResourceQuota getResourceQuota()const;
				std::string getMessage()const;
				std::string getCode()const;

			protected:
				void parse(const std::string &payload);
			private:
				ResourceQuota resourceQuota_;
				std::string message_;
				std::string code_;

			};
		}
	}
}
#endif // !ALIBABACLOUD_CMS_MODEL_DESCRIBEMONITORRESOURCEQUOTAATTRIBUTERESULT_H_